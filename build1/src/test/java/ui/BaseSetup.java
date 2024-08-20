package ui;

import org.junit.jupiter.api.*;

import static com.codeborne.selenide.Selenide.*;
import static io.restassured.RestAssured.*;

public class BaseSetup extends BaseTest {

    public boolean isLogged;

    public BaseSetup() {
        given()
                .header("Content-Type", "application/json")
                .body("{\"user\":{\"email\":\"" + email + "\",\"password\":\"" + password + "\",\"username\":\"" + user + "\"}}")
                .post(baseUrl + "/api/users")
                .statusCode();
        String token = given()
                .header("Content-Type", "application/json")
                .body("{\"user\":{\"email\":\"" + email + "\",\"password\":\"" + password + "\"}}")
                .post(baseUrl + "/api/users/login")
                .getBody()
                .jsonPath()
                .getString("user.token");
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"article\":{\"tagList\":[],\"title\":\"Test Article\",\"description\":\"Autotests\",\"body\":\"Text\"}}")
                .post(baseUrl + "/api/articles/")
                .statusCode();
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"article\":{\"tagList\":[],\"title\":\"delete\",\"description\":\"Autotests\",\"body\":\"Text\"}}")
                .post(baseUrl + "/api/articles/")
                .statusCode();
        given()
                .header("Content-Type", "application/json")
                .header("Authorization", "Token " + token)
                .body("{\"comment\":{\"body\":\"text\"}}")
                .post(baseUrl + "/api/articles/test-article/comments")
                .statusCode();

    }

    @Override
    public void login() {
        try {
            open(baseUrl);
            $x("//a[@href='/login']").click();
            $x("//input[@ng-reflect-name='email']").sendKeys(email);
            $x("//input[@ng-reflect-name='password']").sendKeys(password);
            $x("//button[text()=' Sign in ']").click();
        } catch (Throwable ignored) {
        }
    }

    @Override
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
