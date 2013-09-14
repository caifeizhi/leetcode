class Solution {
public:
    string intToRoman(int num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function            
        string str = "";
        int tmp = num / 1000;
        str += intToRomanByBit(tmp,1000);
        num = num % 1000;
        tmp = num / 100;
        str += intToRomanByBit(tmp,100);
        num = num % 100;
        tmp = num / 10;
        str += intToRomanByBit(tmp,10);
        tmp = num % 10;
        str += intToRomanByBit(tmp,1);   
        
        return str;
    }
    
    // bit can be 1,10,100,1000
    string intToRomanByBit(int num, int bit)
    {
        switch(bit)
        {
            case 1:
            return intToRomanByBit(num, "I","V","X");
            case 10:
            return intToRomanByBit(num, "X","L","C");
            case 100:
            return intToRomanByBit(num, "C","D","M");
            case 1000:
            return intToRomanByBit(num, "M","M","M");
        }
        return "";
    }
    
    string intToRomanByBit(int num, string oneChar, string fiveChar, string tenChar)
    {
        string str = "";
        switch(num)
        {
            case 0:
                break;
            case 1:
                str = oneChar;
                break;
            case 2:
                str = oneChar + oneChar;
                break;
            case 3:
                str = oneChar + oneChar + oneChar;
                break;
            case 4:
                str = oneChar + fiveChar;
                break;
            case 5:
                str = fiveChar;
                break;
            case 6:
                str = fiveChar + oneChar;
                break;
            case 7:
                str = fiveChar + oneChar + oneChar;
                break;
            case 8:
                str = fiveChar + oneChar + oneChar + oneChar;
                break;
            case 9:
                str = oneChar + tenChar;
                break;
        }
        
        return str;
    }
};