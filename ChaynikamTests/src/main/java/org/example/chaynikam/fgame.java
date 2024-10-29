package org.example.chaynikam;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

public class fgame extends AbstractPage {

    @FindBy(xpath = "/html/body/div[4]/div/div[3]/div[2]/div[2]/input[1]")
    private WebElement gvcard;

    @FindBy(xpath = "//*[@id=\"fps\"]")
    private WebElement fps;

    @FindBy(xpath = "//*[@id=\"closediv1\"]")
    private WebElement genre;

    @FindBy(xpath = "//*[@id=\"genrepreload\"]/label[7]/input")
    private WebElement rpg;

    @FindBy(xpath = "//*[@id=\"rescont\"]")
    private WebElement gsearch;

    @FindBy(xpath = "//*[@id=\"gpupreload\"]/div")
    private WebElement amd;

    public fgame(WebDriver driver) {
        super(driver);
    }

    public fgame clickgvcard(){
        gvcard.click();
        return this;
    }

    public fgame setgvcard(String gvcard){
        this.gvcard.sendKeys(gvcard);
        return this;
    }

    public fgame clickfps(){
        fps.click();
        return this;
    }

    public fgame setfps(String fps){
        this.fps.sendKeys(fps);
        return this;
    }

    public fgame clickgenre(){
        genre.click();
        return this;
    }

    public fgame clickrpg(){
        rpg.click();
        return this;
    }

    public fgame clickgsearch(){
        gsearch.click();
        return this;
    }

    public fgame clickamd(){
        amd.click();
        return this;
    }

    public fgame waitamd(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(amd));
        return this;
    }

    public fgame waitgenre(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(genre));
        return this;
    }

    public fgame waitsearch(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(gsearch));
        return this;
    }
}
