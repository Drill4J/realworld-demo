package ui.logged;

import com.codeborne.selenide.Configuration;
import com.codeborne.selenide.Selenide;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;

import static com.codeborne.selenide.Selenide.*;

public class LoggedBaseTest {

    public static String user = "test";
    public static String email = "test@test.test";
    public static String password = "test123";

    @BeforeAll
    public static void beforeAll() {
        Configuration.baseUrl = "http://localhost:8080";
        Configuration.holdBrowserOpen = true;
        open(Configuration.baseUrl);
        $x("//a[@href='/login']").click();
        $x("//input[@ng-reflect-name='email']").sendKeys(email);
        $x("//input[@ng-reflect-name='password']").sendKeys(password);
        $x("//button[text()=' Sign in ']").click();
    }

    @AfterAll
    public static void afterAll() {
        Selenide.clearBrowserCookies();
        Selenide.clearBrowserLocalStorage();
        closeWindow();
    }

    @BeforeEach
    public void openBaseUrl() {
        open(Configuration.baseUrl);
    }
}
