package ui;

import com.codeborne.selenide.Configuration;
import com.codeborne.selenide.Selenide;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;

import static com.codeborne.selenide.Selenide.*;

public class BaseTest {

    public static String user = "test";
    public static String email = "test@test.test";
    public static String password = "test123";

    @BeforeAll
    public static void beforeAll() {
        Configuration.baseUrl = "http://localhost:8080";
        Configuration.holdBrowserOpen = true;
    }

    @BeforeEach
    public void openBaseUrl() {
        open(Configuration.baseUrl);
    }

    @AfterAll
    public static void afterAll() {
        Selenide.clearBrowserCookies();
        Selenide.clearBrowserLocalStorage();
        //closeWindow();
    }
}
