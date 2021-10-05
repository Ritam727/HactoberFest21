import calculator.Calculator;
import static org.junit.Assert.*;

import org.junit.BeforeClass;
import org.junit.Test;


public class CalculatorTest {

    private static Calculator calculator;
    private static double DELTA = 1e-10;

    @BeforeClass
    public static void setup(){
        calculator = new Calculator();
    }

    @Test
    public void sqrtTruePositive(){
        assertEquals("Square root test for True Positive", 2, calculator.callSQRT(4), DELTA);
        assertEquals("Square root test for True Positive", 2.236067977499, calculator.callSQRT(5), DELTA);
        assertEquals("Square root test for True Positive", 0, calculator.callSQRT(0), DELTA);
        assertEquals("Square root test for True Positive", Double.NaN, calculator.callSQRT(-5), DELTA);
    }

    @Test
    public void sqrtFalsePositive(){
        assertNotEquals("Square root test for False Positive", 6, calculator.callSQRT(2), DELTA);
        assertNotEquals("Square root test for False Positive", 7.3, calculator.callSQRT(2.1), DELTA);
        assertNotEquals("Square root test for False Positive", 7.3, calculator.callSQRT(-5), DELTA);
    }

    @Test
    public void natLogTruePositive(){
        assertEquals("natural log test for True Positive", 2.302585092994, calculator.callNatLog(10), DELTA);
        assertEquals("natural log test for True Positive", 2.708050201102, calculator.callNatLog(15), DELTA);
        assertEquals("natural log test for True Positive", Double.NEGATIVE_INFINITY, calculator.callNatLog(0), DELTA);
        assertEquals("natural log test for True Positive", Double.NaN, calculator.callNatLog(-5), DELTA);
    }

    @Test
    public void natLogFalsePositive(){
        assertNotEquals("natural log test for False Positive", 6, calculator.callNatLog(2), DELTA);
        assertNotEquals("natural log test for False Positive", -7.3, calculator.callNatLog(2.1), DELTA);
        assertNotEquals("natural log test for True Positive", 0, calculator.callNatLog(0), DELTA);
        assertNotEquals("natural log test for True Positive", 9.0, calculator.callNatLog(-5), DELTA);
    }

    @Test
    public void callPowerTruePositive(){
        assertEquals("Calculate Power for True Positive", 4, calculator.callPower(2, 2), DELTA);
        assertEquals("Calculate Power for True Positive", 10.74241047739, calculator.callPower(2.1, 3.2), DELTA);
        assertEquals("Calculate Power for True Positive",Double.NaN, calculator.callPower(0, 0), DELTA);
    }

    @Test
    public void callPowerFalsePositive(){
        assertNotEquals("Calculate Power for False Positive", 6, calculator.callPower(2, 2), DELTA);
        assertNotEquals("Calculate Power for False Positive", 7.3, calculator.callPower(2.1, 3.2), DELTA);
        assertNotEquals("Calculate Power for False Positive",0, calculator.callPower(0, 0), DELTA);
    }

    @Test
    public void callFactorialTruePositive(){
        assertEquals("Calculate Factorial for True Positive", 2, calculator.callFact(2), DELTA);
        assertEquals("Calculate Factorial for True Positive", 6, calculator.callFact(3), DELTA);
        assertEquals("Calculate Factorial for True Positive",1, calculator.callFact(0), DELTA);
        assertEquals("Calculate Factorial for True Positive",Double.NaN, calculator.callFact(-5), DELTA);
    }

    @Test
    public void callFactorialFalsePositive(){
        assertNotEquals("Calculate Factorial for False Positive", 6, calculator.callFact(2), DELTA);
    //    assertNotEquals("Calculate Factorial for False Positive", 7.3, calculator.callFact(2.1), DELTA);
        assertNotEquals("Calculate Factorial for False Positive",2, calculator.callFact(0), DELTA);
        assertNotEquals("Calculate Factorial for False Positive",5, calculator.callFact(-5), DELTA);
    }

}
