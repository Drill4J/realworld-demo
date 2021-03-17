package ui.common;

import org.junit.jupiter.api.MethodOrderer;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestMethodOrder;
import org.openqa.selenium.Keys;
import ui.BaseTest;

import static com.codeborne.selenide.Condition.text;
import static com.codeborne.selenide.Condition.visible;
import static com.codeborne.selenide.Selenide.$x;

@TestMethodOrder(MethodOrderer.OrderAnnotation.class)
public class UserTest extends BaseTest {

    @Order(1)
    @Test
    public void loginUser() {
        $x("//a[@href='/login']").click();
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//button[text()=' Sign in ']").click();
        $x("//a[@href='/profile/test']").shouldHave(text(user));
    }

    @Order(2)
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

    @Order(3)
    @Test
    public void logoutUser() {
        $x("//a[@href='/profile/test']").click();
        $x("//a[@href='/settings']").click();
        $x("//button[text()=' Or click here to logout. ']").click();
        $x("//a[@href='/profile/test']").shouldNotBe(visible);
    }
}
