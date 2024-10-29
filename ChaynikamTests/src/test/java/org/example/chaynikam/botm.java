package org.example.chaynikam;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.By;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import java.time.Duration;

public class botm extends AbstractTest {

    @Test
    void botmTest() throws InterruptedException {
        new WebDriverWait(getDriver(), Duration.ofSeconds(10)).until(ExpectedConditions.urlContains("https://www.chaynikam.info"));
        Assertions.assertTrue(getDriver().getTitle().contains("chaynikam.info"), "Страница не доступна");

        new main(getDriver())
                .clickproject()
                .waitproject();

        Assertions.assertEquals("О чем и для кого этот сайт", getDriver().findElement(By.xpath("/html/body/div[4]/div/div/h1"))
                .getText(), "Не соотвествующая страница");

        new main(getDriver())
                .clickcontacts()
                .waitcontacts();

        Assertions.assertEquals("Связь с администратором сайта", getDriver().findElement(By.xpath("/html/body/div[4]/div/div[1]/h1"))
                .getText(), "Не соотвествующая страница");

        new main(getDriver())
                .clickpolitics()
                .waitpolitics();

        Assertions.assertEquals("Политика конфиденциальности\n" +
                "www.chaynikam.info", getDriver().findElement(By.xpath("/html/body/div[4]/div/div/h1"))
                .getText(), "Не соотвествующая страница");

        new main(getDriver())
                .clickmap()
                .waitcmap();

        Assertions.assertEquals("Карта сайта", getDriver().findElement(By.xpath("/html/body/div[4]/div/h1"))
                .getText(), "Не соотвествующая страница");

        new main(getDriver())
                .clicksetnet()
                .waitsetnet();

        Assertions.assertEquals("Настройка сети", getDriver().findElement(By.xpath("/html/body/div[4]/div[1]/div[1]/h1"))
                .getText(), "Не соотвествующая страница");

        Thread.sleep(5000L);
        driver.quit() ;
    }
    //Слипы прописаны, дабы было видно, как программа переходит по сайту.
}
