package ui.common;

import org.junit.jupiter.api.Test;

import static com.codeborne.selenide.Selenide.$x;

public class CreateNewArticleTest extends LoginLogoutTest {

    @Test
    public void createNewArticle(){
        $x("//a[@href='/editor']").click();

    }

}
