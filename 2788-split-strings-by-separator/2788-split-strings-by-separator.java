class Solution {
    public List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String>ans=new ArrayList<>();
        for(int i=0;i<words.size();i++)
        {
            String x=words.get(i);
            String c[]=x.split("\\" + separator);
            for(String k:c)
            if(k!="")
            ans.add(k);
        }
        return ans;

    }
}