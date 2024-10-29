package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.By;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class search extends AbstractTest {
    @Test
    void searchTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new fsearch(getDriver())
                .toSearch("разгон видеокарты");
        new fsearch(getDriver())
                .waitopen()
                .clickopen()
                .waitresult();

        Assertions.assertEquals("Разгон видеокарты nVidia GeForce", getDriver().findElement(By
                        .xpath("//*[@id=\"___gcse_0\"]/div/div/div[1]/div[6]/div[2]/div/div/div[1]/div[1]/div[1]/div[1]/div/a/b"))
                .getText(), "не соответствует значение результатов");

        new fsearch(getDriver())
                .clickresult();

        Thread.sleep(5000L);
        driver.quit() ;
    }
}
