package org.example.chaynikam;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

public class fsmartphone extends AbstractPage {

    @FindBy(xpath = "/html/body/div[4]/div/div[1]/div[1]/a")
    private WebElement gadgets;

    @FindBy(xpath = "//*[@id=\"container\"]/div[2]/span[3]/a/span")
    private WebElement comparison;

    @FindBy(xpath = "//*[@id=\"addknopka\"]")
    private WebElement addbut;

    @FindBy(xpath = "//*[@id=\"filsmartmodel\"]")
    private WebElement input;

    @FindBy(xpath = "//*[@id=\"containerspisok\"]/div[3]/label/input")
    private WebElement ip11;

    @FindBy(xpath = "//*[@id=\"containerspisok\"]/div[7]/label/input")
    private WebElement ip12;

    @FindBy(xpath = "//*[@id=\"addcheck\"]")
    private WebElement addchek;

    public fsmartphone(WebDriver driver) {
        super(driver);
    }

    public fsmartphone clickgadgets(){
        gadgets.click();
        return this;
    }

    public fsmartphone clickcomparison(){
        comparison.click();
        return this;
    }

    public fsmartphone clickaddbut(){
        addbut.click();
        return this;
    }

    public fsmartphone clickinput(){
        input.click();
        return this;
    }

    public fsmartphone setdev(String input){
        this.input.sendKeys(input);
        return this;
    }

    public fsmartphone waitip11(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(ip11));
        return this;
    }

    public fsmartphone waitip12(){
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(ip12));
        return this;
    }

    public fsmartphone clickadd1() {
        ip11.click();
        return this;
    }

    public fsmartphone clickadd2() {
        ip12.click();
        return this;
    }

    public fsmartphone clickaddchek(){
        addchek.click();
        return this;
    }
}
