using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _777
{
    class CValueFraction
    {
        public int valueDenominator = 0;
        public int valueNumerator = 0;
        public static CValueFraction operator +(CValueFraction fr1, CValueFraction fr2)
        {
            if (fr1.valueDenominator == fr2.valueDenominator)
                    return new CValueFraction { valueDenominator = fr1.valueDenominator, valueNumerator = fr1.valueNumerator + fr2.valueNumerator};
            CValueFraction c3 = new CValueFraction();
            c3.valueDenominator = fr1.valueDenominator * fr2.valueDenominator; c3.valueNumerator = fr1.valueNumerator * fr2.valueDenominator + fr1.valueDenominator * fr2.valueNumerator;
            if (fr1.valueDenominator != fr2.valueDenominator)
            {
                int i1 = c3.valueNumerator, i2 = c3.valueDenominator;
                for ( int i = 1; i <= (i1 <= i2 ? i1:i2); ++i)
                {
                    if(c3.valueNumerator%i == 0 && c3.valueDenominator%i == 0)
                    {
                        c3.valueDenominator /= i;
                        c3.valueNumerator /= i;
                    }
                }   
            }            
            return c3;
                         
        }
        public static CValueFraction operator -(CValueFraction fr1, CValueFraction fr2)
        {
            if (fr1.valueDenominator == fr2.valueDenominator)
                return new CValueFraction { valueDenominator = fr1.valueDenominator, valueNumerator = fr1.valueNumerator - fr2.valueNumerator };
            CValueFraction c3 = new CValueFraction();
            c3.valueDenominator = fr1.valueDenominator * fr2.valueDenominator; c3.valueNumerator = fr1.valueNumerator * fr2.valueDenominator - fr1.valueDenominator * fr2.valueNumerator;
            if (fr1.valueDenominator != fr2.valueDenominator)
            {
                int i1 = c3.valueNumerator, i2 = c3.valueDenominator;
                for (int i = 1; i <= (i1 <= i2 ? i1 : i2); ++i)
                {
                    if (c3.valueNumerator % i == 0 && c3.valueDenominator % i == 0)
                    {
                        c3.valueDenominator /= i;
                        c3.valueNumerator /= i;
                    }
                }
            }
            return c3;
            // return new CValueFraction { valueDenominator = fr1.valueDenominator * fr1.valueDenominator, valueNumerator = fr1.valueNumerator * fr2.valueDenominator + fr1.valueDenominator * fr2.valueNumerator };          
        }
        public static CValueFraction operator *(CValueFraction fr1, CValueFraction fr2)
        {
          //  if (fr1.valueDenominator != fr2.valueDenominator)
                return new CValueFraction { valueDenominator = fr1.valueDenominator * fr2.valueDenominator, valueNumerator = fr1.valueNumerator * fr2.valueNumerator };
            
            // return new CValueFraction { valueDenominator = fr1.valueDenominator * fr1.valueDenominator, valueNumerator = fr1.valueNumerator * fr2.valueDenominator + fr1.valueDenominator * fr2.valueNumerator };          
        }
        public static CValueFraction operator /(CValueFraction fr1, CValueFraction fr2)
        {
                return new CValueFraction { valueDenominator = fr1.valueDenominator * fr2.valueNumerator, valueNumerator = fr1.valueNumerator * fr2.valueDenominator };

            // return new CValueFraction { valueDenominator = fr1.valueDenominator * fr1.valueDenominator, valueNumerator = fr1.valueNumerator * fr2.valueDenominator + fr1.valueDenominator * fr2.valueNumerator };          
        }

    }
}
