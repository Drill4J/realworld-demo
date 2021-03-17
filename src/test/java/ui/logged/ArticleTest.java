package ui.logged;

import com.codeborne.selenide.Condition;
import org.junit.jupiter.api.MethodOrderer;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestMethodOrder;

import static com.codeborne.selenide.Selenide.$x;

@TestMethodOrder(MethodOrderer.OrderAnnotation.class)
public class ArticleTest extends LoggedBaseTest {

    @Order(1)
    @Test
    public void createNewArticle() {
        $x("//a[@href='/editor']").click();
        $x("//input[@ng-reflect-name='title']").sendKeys("Heisenbug");
        $x("//input[@ng-reflect-name='description']").sendKeys("Piter 2021");
        $x("//textarea[@ng-reflect-name='body']").sendKeys("Drill is cool!");
        $x("//input[@placeholder='Enter tags']").sendKeys("drill");
        $x("//button[text()=' Publish Article ']").click();
        $x("//div[@class='container']/h1").shouldHave(Condition.exactText("Heisenbug"));
    }

    @Order(2)
    @Test
    public void editArticle() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//a[text()=' Edit Article ']").click();
        $x("//textarea[@ng-reflect-name='body']").sendKeys(" We would appreciate any feedback.");
        $x("//button[text()=' Publish Article ']").click();
        $x("//p[contains(.,'Drill is cool! We would appreciate any feedback.')]")
                .shouldBe(Condition.visible);
    }

    @Order(3)
    @Test
    public void addComment() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//textarea[@placeholder='Write a comment...']").sendKeys("Does drill support MacOS?");
        $x("//button[text()=' Post Comment ']").click();
        $x("//p[contains(.,'Does drill support MacOS?')]")
                .shouldBe(Condition.visible);
    }

    @Order(4)
    @Test
    public void deleteComment() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//div[@class='card']//i[@class='ion-trash-a']").click();
        $x("//p[contains(.,'Does drill support MacOS?')]")
                .shouldNotBe(Condition.visible);
    }

    @Order(5)
    @Test
    public void toggleHeart() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//i[@class='ion-heart']").click();
        $x("//app-favorite-button[contains(.,'1')]").shouldBe(Condition.visible);
    }

    @Order(6)
    @Test
    public void deleteArticle() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//button[contains(.,' Delete Article ')]").click();
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").shouldNotBe(Condition.visible);
    }
}
