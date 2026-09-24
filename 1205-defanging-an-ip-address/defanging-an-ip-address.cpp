class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0 ;
        string ans ; 

        //first choose while loop
        while(index<address.size())
        {
            if(address[index]== '.')
            ans +="[.]";
            else
            ans += address[index];

            index++;


        }
        return ans ; 
    }
};