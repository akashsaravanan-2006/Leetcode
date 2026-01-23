class Solution {
    public List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String>ans=new ArrayList<>();
        for(int i=0;i<words.size();i++) 
        {
            String a[]=words.get(i).split("\\"+separator);
            for(String k:a)
            if(!k.isEmpty())
            ans.add(k);
        }
        return ans;
    }
}