package ui;

import com.codeborne.selenide.Condition;
import com.codeborne.selenide.Selenide;
import org.junit.jupiter.api.MethodOrderer;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestMethodOrder;
import org.openqa.selenium.By;
import org.openqa.selenium.Keys;

import static com.codeborne.selenide.Condition.text;
import static com.codeborne.selenide.Condition.visible;
import static com.codeborne.selenide.Selenide.$;
import static com.codeborne.selenide.Selenide.$x;

@TestMethodOrder(MethodOrderer.OrderAnnotation.class)
public class CommonTest extends BaseTest {

    @Order(1)
    @Test
    public void registerNewUser() {
        $(By.partialLinkText("Sign up")).click();
        $x("//input[@ng-reflect-name='username']").sendKeys(user);
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//input[@ng-reflect-name='phone']").sendKeys("+1000000000");
        $x("//button[text()=' Sign up ']").click();
        $x("//a[@href='/profile/test']").shouldHave(text(user));
        Selenide.clearBrowserCookies();
        Selenide.clearBrowserLocalStorage();
    }

    @Order(2)
    @Test
    public void loginUser() {
        $x("//a[@href='/login']").click();
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//input[@ng-reflect-name='phone']").sendKeys("+1000000000");
        $x("//button[text()=' Sign in ']").click();
        $x("//a[@href='/profile/test']").shouldHave(text(user));
    }

    @Order(3)
    @Test
    public void editUser() {
        $x("//a[@href='/settings']").click();
        $x("//input[@ng-reflect-name='image']").sendKeys(Keys.CONTROL + "a");
        $x("//input[@ng-reflect-name='image']")
                .sendKeys("https://avatars.githubusercontent.com/u/45690995?s=200&v=4");
        $x("//textarea[@ng-reflect-name='bio']").sendKeys("Drill profile");
        $x("//button[text()=' Update Settings ']").click();
        $x("//p[contains(.,'Drill profile')]")
                .shouldBe(visible);
    }

    @Order(4)
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

    @Order(5)
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

    @Order(6)
    @Test
    public void addComment() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//textarea[@placeholder='Write a comment...']").sendKeys("Does drill support MacOS?");
        $x("//button[text()=' Post Comment ']").click();
        $x("//p[contains(.,'Does drill support MacOS?')]")
                .shouldBe(Condition.visible);
    }

    @Order(7)
    @Test
    public void deleteComment() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//div[@class='card']//i[@class='ion-trash-a']").click();
        $x("//p[contains(.,'Does drill support MacOS?')]")
                .shouldNotBe(Condition.visible);
    }

    @Order(8)
    @Test
    public void toggleHeart() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//i[@class='ion-heart']").click();
        $x("//app-favorite-button[contains(.,'1')]").shouldBe(Condition.visible);
    }

    @Order(9)
    @Test
    public void deleteArticle() {
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").click();
        $x("//button[contains(.,' Delete Article ')]").click();
        $x("//a[text()=' Global Feed ']").click();
        $x("//a[@href='/article/heisenbug']").shouldNotBe(Condition.visible);
    }

    @Order(10)
    @Test
    public void logoutUser() {
        $x("//a[@href='/profile/test']").click();
        $x("//a[@href='/settings']").click();
        $x("//button[text()=' Or click here to logout. ']").click();
        $x("//a[@href='/profile/test']").shouldNotBe(visible);
    }

}
