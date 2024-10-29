package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.openqa.selenium.*;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class videocard extends AbstractTest {

    @Test
    void videocardTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new main(getDriver())
                .clickdiveces();
        //Thread.sleep(2000L);

        new fvidecard(getDriver())
                .clickvcard();
        //Thread.sleep(2000L);

        new fvidecard(getDriver())
                .clickcomparison()
                .clickaddbut()
                .clickinput()
                .setgf10("geforce 10");

        Thread.sleep(3000L);
        Assertions.assertEquals("26", getDriver().findElement(By.id("numsearch")).getText(), "не соответствует значение поиска");
        //ассерт может зафейлится т.к. периодически значение поиска выдает 43, но за счет слипа каол-во фейлов значительно меньше

        new fvidecard(getDriver())
                .clickaddgf1050()
                .clickaddbut()
                .clickaddgf1080();

        Thread.sleep(5000L);
        driver.quit();
    }
}