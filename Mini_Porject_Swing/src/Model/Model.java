package Model;

import java.lang.reflect.Array;

public class Model {
    private FootballPlayer []playerList = new FootballPlayer[3];


    public Model()
    {
        this.playerList[0] = new FootballPlayer(1,65,"Ronaldo", "X", "World","school",new Height(6,7));
        this.playerList[1] = new FootballPlayer(2,60,"Neymar", "Y", "World","school",new Height(6,7));
        this.playerList[2] = new FootballPlayer(3,66,"Messi", "Z", "World","school",new Height(6,7));
    }

    public FootballPlayer[] findTallestPlayer()
    {
        FootballPlayer []tallestPlayer = new FootballPlayer[20];
        FootballPlayer currentPlayer = this.playerList[0];
        int i,j=0;
        for(i=1;i<3;i++)
        {
            if(this.playerList[i].getHeight()>currentPlayer.getHeight())
            {
                currentPlayer = this.playerList[i];
            }
            else if(this.playerList[i].getHeight()==currentPlayer.getHeight())
            {
                tallestPlayer[j] = playerList[i];
                j++;
            }
        }
        tallestPlayer[j] = currentPlayer;
        return tallestPlayer;
    }
}
