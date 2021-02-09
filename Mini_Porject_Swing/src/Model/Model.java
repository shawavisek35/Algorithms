package Model;

public class Model {
    private FootballPlayer player1, player2, player3;

    public Model(FootballPlayer player1, FootballPlayer player2, FootballPlayer player3)
    {
        this.player1 = player1;
        this.player2 = player2;
        this.player3 = player3;
    }

    public String findTallestPlayer()
    {
        if(player1.getHeight()>player2.getHeight() && player1.getHeight()>player3.getHeight())
        {
            return player1.getName()+" is the tallest.";
        }
        else if(player2.getHeight()>player3.getHeight())
        {
            return player2.getName()+" is the tallest.";
        }
        else{
            return player3.getName()+" is the tallest.";
        }

    }
}
