package Model;

public class OffensiveLine {
    FootballPlayer []player;

    //constructor
    public OffensiveLine(FootballPlayer []players)
    {
        this.player = players;
    }

    //to String method
    @Override
    public String toString()
    {
        String s = "";
        for(int i=0;i<3;i++)
        {
            s+=player[i].getNumber()+", ";
            s+=player[i].getName()+", ";
            s+=player[i].getHeight()+", ";
            s+=player[i].getPosition()+", ";
            s+=player[i].getWeight()+", ";
            s+=player[i].getHometown()+", ";
            s+=player[i].getHighSchool();
            s+=";";
        }
        return s;
    }

    //Average weight of the offensive line
    public int average_weight()
    {
        int sum = 0;
        for(int i=0;i<3;i++)
        {
            sum += player[i].getWeight();
        }
        return sum/3;
    }
}
