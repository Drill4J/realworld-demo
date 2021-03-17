package ui.common;

import org.junit.jupiter.api.Test;
import ui.BaseTest;

import static com.codeborne.selenide.Condition.text;
import static com.codeborne.selenide.Condition.visible;
import static com.codeborne.selenide.Selenide.$x;

public class LoginLogoutTest extends BaseTest {

    @Test
    public void login(){
        $x("//a[@href='/login']").click();
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//button[text()=' Sign in ']").click();
        $x("//a[@href='/profile/test']").shouldHave(text(user));
    }

    @Test
    public void logout(){
        $x("//a[@href='/profile/test']").click();
        $x("//a[@href='/settings']").click();
        $x("//button[text()=' Or click here to logout. ']").click();
        $x("//a[@href='/profile/test']").shouldNotBe(visible);
    }
}
