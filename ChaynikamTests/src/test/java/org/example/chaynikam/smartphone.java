package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.openqa.selenium.*;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class smartphone extends AbstractTest {

    @Test
    void smartphoneTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new main(getDriver())
                .clickdiveces();
        //Thread.sleep(2000L);

        new fsmartphone(getDriver())
                .clickgadgets();
        //Thread.sleep(2000L);

        new fsmartphone(getDriver())
                .clickcomparison()
                .clickaddbut()
                .clickinput()
                .setdev("iphone")
                .waitip11()
                .waitip12();

        Assertions.assertEquals("32", getDriver().findElement(By.id("nayd")).getText(), "не соответствует значение поиска");

        new fsmartphone(getDriver())
                .clickadd1()
                .clickadd2()
                .clickaddchek();

        Thread.sleep(5000L);
        driver.quit();
    }
    //Слипы прописаны, дабы было видно, как программа переходит по сайту.
}