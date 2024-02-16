class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)return false;
        if (x > -1 && x < 10)return true;
        if (x%10 == 0)return false;
        int newX = 0;
        int originX = x;


        while(originX > newX){
            newX = newX * 10;
            newX = newX + (originX % 10);
            originX = originX / 10; 
        }
        
        return (originX == newX || originX == newX / 10);
    }
};