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
        String osName = System.getProperty("os.name").toLowerCase();
        if (osName.contains("mac")) {
            System.setProperty("webdriver.chrome.driver", "../chrome-driver/chromedriver");
            Configuration.browserBinary = "../chromium-binary/chrome-mac/Chromium.app/Contents/MacOS/Chromium";
        } else if (osName.contains("win")) {
            System.setProperty("webdriver.chrome.driver", "..\\chrome-driver\\chromedriver.exe");
            Configuration.browserBinary = "..\\chromium-binary\\chrome-win\\chrome.exe";
        } else if (osName.contains("linux")) {
            System.setProperty("webdriver.chrome.driver", "../chrome-driver/chromedriver");
            Configuration.browserBinary = "../chromium-binary/chrome-linux/chrome";
        } else {
            throw new UnsupportedOperationException("Unsupported operating system: " + osName);
        }
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
