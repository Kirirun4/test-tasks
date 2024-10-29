package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.By;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class game extends AbstractTest {

    @Test
    void gameTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new main(getDriver())
                .clickgamecat();
        //Thread.sleep(2000L);

        new fgame(getDriver())
                .clickgvcard()
                .setgvcard("Radeon RX 5600M");
        //Thread.sleep(2000L);

        new fgame(getDriver())
                .waitamd()
                .clickamd();
        //Thread.sleep(2000L);

        new fgame(getDriver())
                .clickfps()
                .setfps("60");
        //Thread.sleep(2000L);

        new fgame(getDriver())
                .clickgenre()
                .waitgenre()
                .clickrpg();
        //Thread.sleep(2000L);

        new fgame(getDriver())
                .waitsearch()
                .clickgsearch();

        Assertions.assertEquals("Найдено 129, показано 129", getDriver().findElement(By.id("rescont")).getText(), "не соответствует значение поиска");
        //ассерт может зайелится из-за того, что база сайта обновится и значения поиска изменятся

        Thread.sleep(5000L);
        driver.quit() ;
    }
    //Слипы прописаны, дабы было видно, как программа переходит по сайту.
}