package ui;

import org.junit.jupiter.api.*;

import static com.codeborne.selenide.Selenide.*;
import static io.restassured.RestAssured.*;

public class BaseSetup extends BaseTest {

    public static String baseUrl = "http://localhost:8082";

    public BaseSetup() {
        given()
                .header("Content-Type", "application/json")
                .body("{\"user\":{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"phone\":\"+1000000000\",\"username\":\"" + user + "\"}}")
                .post(baseUrl + "/api/users")
                .then();
        String token = given()
                .header("Content-Type", "application/json")
                .body("{\"user\":{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"phone\":\"+1000000000\"}}")
                .post(baseUrl + "/api/users/login")
                .getBody()
                .jsonPath()
                .getString("user.token");
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"article\":{\"tagList\":[],\"title\":\"Test Article\",\"description\":\"Autotests\",\"body\":\"Text\"}}")
                .post(baseUrl + "/api/articles/")
                .then();
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"article\":{\"tagList\":[],\"title\":\"delete\",\"description\":\"Autotests\",\"body\":\"Text\"}}")
                .post(baseUrl + "/api/articles/")
                .then();
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"comment\":{\"body\":\"text\"}}")
                .post(baseUrl + "/api/articles/test-article/comments")
                .then();
    }

    @Override
    public void login() {
        try {
            open(baseUrl);
            $x("//a[@href='/login']").click();
            $x("//input[@ng-reflect-name='email']").sendKeys(email);
            $x("//input[@ng-reflect-name='password']").sendKeys(password);
            $x("//input[@ng-reflect-name='phone']").sendKeys("+1000000000");
            $x("//button[text()=' Sign in ']").click();
        } catch (Throwable ignored) {
        }
    }

    public void logout() {
        try {
            open(baseUrl);
            $x("//a[@href='/profile/test']").click();
            $x("//a[@href='/settings']").click();
            $x("//button[text()=' Or click here to logout. ']").click();
        } catch (Throwable ignored) {
        }
    }

    @AfterAll
    public static void afterAll() {
        given().delete(baseUrl + "/api/articles/delete").then();
    }
}
