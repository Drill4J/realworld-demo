package ui.preconditions;

import org.junit.jupiter.api.Test;
import org.openqa.selenium.By;
import ui.BaseTest;

import static com.codeborne.selenide.Condition.text;
import static com.codeborne.selenide.Selenide.$;
import static com.codeborne.selenide.Selenide.$x;

public class CreateNewUser extends BaseTest {

    @Test
    public void registerNewUser() {
        $(By.partialLinkText("Sign up")).click();
        $x("//input[@ng-reflect-name='username']").sendKeys(user);
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//button[text()=' Sign up ']").click();
        $x("//a[@href='/profile/test']").shouldHave(text(user));
    }

}
