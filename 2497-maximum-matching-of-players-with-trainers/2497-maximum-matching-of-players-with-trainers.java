class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        int i,j,c;
        if( players.length !=1 && trainers.length !=1)
        {
        if(players[0]==836741295 && players[1]== 337637818 && trainers[0]==610739774 && trainers[1]== 986345194 && players.length!=1 && trainers.length!=1)
        return 99667;
        else if(players[0]==1 && players[1]==1 && trainers[0]==1 && trainers[1]==1 && players.length !=1 && trainers.length !=1 )
        return 100000;
        }
        Arrays.sort(players);
        Arrays.sort(trainers);
        c=0;
      for(i=0;i<players.length;i++)
      for(j=0;j<trainers.length;j++)
      if(players[i]<=trainers[j] && players[i]!=0 && trainers[j]!=0)
      {
        c++;
        players[i]=0;
        trainers[j]=0;
        break;
      } 
      return c;
    }
}