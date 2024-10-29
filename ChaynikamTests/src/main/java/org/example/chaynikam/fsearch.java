package org.example.chaynikam;

import org.junit.jupiter.api.Assertions;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

public class fsearch extends AbstractPage {

    @FindBy(xpath = "//*[@id=\"searchbutton\"]")
    private WebElement search;

    @FindBy(xpath = "//*[@id=\"gsc-i-id1\"]")
    private WebElement input;

    @FindBy(xpath = "/html/body/table/tbody/tr/td[2]/table/tbody/tr[1]")
    private WebElement open;

    @FindBy(xpath = "//*[@id=\"___gcse_0\"]/div/div/div[1]/div[6]/div[2]/div/div/div[1]/div[1]/div[1]/div[3]/div[1]/div/a")
    private WebElement result;

    @FindBy(xpath = "/html/body/div[4]/div[1]/div[1]/h1")
    private WebElement asser;

    public fsearch(WebDriver driver) {
        super(driver);
    }

    public fsearch clickopen() {
        open.click();
        return this;
    }

    public fsearch waitopen(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(open));
        return this;
    }

    public fsearch clickresult() {
        result.click();
        return this;
    }

    public fsearch waitresult(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(result));
        return this;
    }

    public void toSearch(String value) {
        search.click();
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(input));
        input.sendKeys(value);
        //input.submit();
    }
}