package org.example.chaynikam;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

public class fvidecard extends AbstractPage {

    @FindBy(xpath = "/html/body/div[4]/div/div[3]/div[3]/a")
    private WebElement vcard;

    @FindBy(xpath = "//*[@id=\"container\"]/div[4]/span[3]/a/span")
    private WebElement comparison;

    @FindBy(xpath = "/html/body/div[4]/div[1]/div[2]/div[2]/div[1]")
    private WebElement addbut;

    @FindBy(xpath = "/html/body/div[4]/div[1]/div[2]/div[2]/div[2]/div[3]/input")
    private WebElement input;

    @FindBy(xpath = "//*[@id=\"containergpuspisok\"]/div[16]")
    private WebElement gf1050;

    @FindBy(xpath = "//*[@id=\"containergpuspisok\"]/div[22]")
    private WebElement gf1080;

    public fvidecard(WebDriver driver) {
        super(driver);
    }

    public fvidecard clickvcard() {
        vcard.click();
        return this;
    }

    public fvidecard clickcomparison() {
        comparison.click();
        return this;
    }

    public fvidecard clickaddbut() {
        addbut.click();
        return this;
    }

    public fvidecard clickinput() {
        input.click();
        return this;
    }

    public fvidecard setgf10(String input) {
        this.input.sendKeys(input);
        return this;
    }

    public fvidecard clickaddgf1050() {
        gf1050.click();
        return this;
    }

    public fvidecard clickaddgf1080() {
        gf1080.click();
        return this;
    }
}