package ui;

import com.codeborne.selenide.*;
import org.junit.jupiter.api.*;

import static com.codeborne.selenide.Selenide.*;

abstract class BaseTest {

    public static String user = "test";
    public static String email = "test@test.test";
    public static String password = "test123";
    public static String baseUrl = "http://localhost:8080";

    public BaseTest() {
        Configuration.baseUrl = baseUrl;
        Configuration.holdBrowserOpen = true;
        Configuration.browser = "chrome";
        login();
    }

    @BeforeAll
    public static void beforeAll() {
        open(baseUrl);
    }

    @AfterAll
    public static void afterAll() {
        Selenide.clearBrowserCookies();
        Selenide.clearBrowserLocalStorage();
        closeWindow();
    }

    @BeforeEach
    public void openBaseUrl() {
        open(baseUrl);
    }

    public abstract void login();

    public abstract void logout();
}
