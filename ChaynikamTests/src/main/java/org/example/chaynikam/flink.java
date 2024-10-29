package org.example.chaynikam;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

public class flink extends AbstractPage {

    @FindBy(xpath = "/html/body/div[4]/div/div[2]/div[3]")
    private WebElement bios;

    @FindBy(xpath = "//*[@id=\"container\"]/div[4]")
    private WebElement vcbios;

    public flink(WebDriver driver) {
        super(driver);
    }

    public flink clickbios(){
        bios.click();
        return this;
    }

    public flink clickvcbios(){
        vcbios.click();
        return this;
    }
}
