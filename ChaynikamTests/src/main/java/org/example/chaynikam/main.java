package org.example.chaynikam;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

public class main extends AbstractPage {

    @FindBy(xpath = "/html/body/div[1]/a/span")
    private WebElement chaynikam;
    @FindBy(xpath = "/html/body/div[4]/div/div[1]/a")
    private WebElement diveces;

    @FindBy(xpath = "/html/body/div[4]/div/div[2]/a")
    private WebElement windows;

    @FindBy(xpath = "/html/body/div[4]/div/div[3]/a")
    private WebElement programms;

    @FindBy(xpath = "/html/body/div[4]/div/div[4]/a")
    private WebElement net;

    @FindBy(xpath = "/html/body/div[4]/div/div[6]/span[2]/a/span")
    private WebElement gamecat;

    @FindBy(xpath = "/html/body/div[5]/div[2]/a[1]")
    private WebElement project;

    @FindBy(xpath = "/html/body/div[5]/div[2]/a[3]")
    private WebElement contacts;

    @FindBy(xpath = "/html/body/div[5]/div[2]/a[4]")
    private WebElement map;

    @FindBy(xpath = "/html/body/div[5]/div[2]/a[5]")
    private WebElement politics;

    @FindBy(xpath = "/html/body/div[5]/div[1]/span[3]/a[12]")
    private WebElement setnet;

    public main(WebDriver driver) {
        super(driver);
    }

    public main clickchaynikam(){
        chaynikam.click();
        return this;
    }

    public main clickdiveces(){
        diveces.click();
        return this;
    }

    public main clickwindows(){
        windows.click();
        return this;
    }

    public main clickprogramms(){
        programms.click();
        return this;
    }

    public main clicknet(){
        net.click();
        return this;
    }

    public main clickgamecat(){
        gamecat.click();
        return this;
    }

    public main clickproject(){
        project.click();
        return this;
    }

    public main clickcontacts(){
        contacts.click();
        return this;
    }

    public main clickmap(){
        map.click();
        return this;
    }

    public main clickpolitics(){
        politics.click();
        return this;
    }

    public main clicksetnet(){
        setnet.click();
        return this;
    }

    public main waitproject() {
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(project));
        return this;
    }

    public main waitcontacts() {
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(contacts));
        return this;
    }

    public main waitpolitics() {
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(politics));
        return this;
    }

    public main waitcmap() {
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(map));
        return this;
    }

    public main waitsetnet() {
        new WebDriverWait(getDriver(), Duration.ofSeconds(5)).until(ExpectedConditions.elementToBeClickable(setnet));
        return this;
    }
}
