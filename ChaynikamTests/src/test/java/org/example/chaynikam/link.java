package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class link extends AbstractTest {

    @Test
    void linkTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new main(getDriver())
                .clickdiveces();
        //Thread.sleep(2000L);

        new flink(getDriver())
                .clickbios();
        //Thread.sleep(2000L);

        new flink(getDriver())
                .clickvcbios();
        //Thread.sleep(2000L);

        new main(getDriver())
                .clickchaynikam();             

        Thread.sleep(5000L);
        driver.quit() ;
    }
    //Слипы прописаны, дабы было видно, как программа переходит по сайту.
}
