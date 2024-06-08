class Solution {
public:
    string defangIPaddr(string address) {
        int len=address.length();
        string ip="";
        for(int i=0;i<len;i++)
        {
            if(address[i]=='.')
                ip=ip+"[.]";
            else
                ip=ip+address[i];
        }
        return ip;
    }
};