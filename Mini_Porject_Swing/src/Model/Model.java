package Model;

public class Model {
//    private FootballPlayer []playerList = new FootballPlayer[3];
//    private OffensiveLine offensiveLine;

    public Model()
    {
//        this.playerList[0] = new FootballPlayer(1,65,"Ronaldo", "Center", "World","school",new Height(5,7));
//        this.playerList[1] = new FootballPlayer(2,60,"Neymar", "Offensive Guard", "World","school",new Height(6,7));
//        this.playerList[2] = new FootballPlayer(3,66,"Messi", "Offensive Tackle", "World","school",new Height(6,7));
//        offensiveLine = new OffensiveLine(playerList);

        FootballPlayer fp = new FootballPlayer(2,209,"Marcus Allen","S","Upper Marlboro, MD","Dr. Henry A. Wise",new Height(6,2));
        System.out.println(fp.getAttributes().toString());
        System.out.println(fp.getAttributes().toString()); //Yes, we are running
        for (int i = 0; i < fp.getAttributes().size(); i++)
        {
            System.out.println(i + " = " + fp.getAttributeName(i) + " - " +
                    fp.getAttribute(i));
        }
        System.out.println(fp.getAttributeNames().toString());
        System.out.println(fp.getAttributeNames().toString()); //Yes, we are running
    }

    //Display offensive line information
//    public void displayOffensiveLine()
//    {
//        String []asr = new String[3];
//        String s = offensiveLine.toString();
//        asr = s.split(";");
//        for(String a : asr)
//        {
//            System.out.println(a);
//        }
//    }
//
//    //Displaying the average weight of the Offensive Line
//    public void averageWeightOffensiveLine()
//    {
//        System.out.println("The Average weight of the offensive Line is : "+offensiveLine.average_weight());
//    }

//    public FootballPlayer[] findTallestPlayer()
//    {
//        FootballPlayer []tallestPlayers = new FootballPlayer[20];
//        FootballPlayer []tallestPlayer = new FootballPlayer[20];
//        FootballPlayer currentPlayer = this.playerList[0];
//        int i,j=0;
//        for(i=1;i<this.playerList.length;i++)
//        {
//            if(this.playerList[i].getHeight()>currentPlayer.getHeight())
//            {
//                currentPlayer = this.playerList[i];
//            }
//            else if(this.playerList[i].getHeight()==currentPlayer.getHeight())
//            {
//                tallestPlayer[j] = playerList[i];
//                j++;
//            }
//        }
//        tallestPlayer[j] = currentPlayer;
//        j=0;
//        for(i=0;i<tallestPlayer.length;i++)
//        {
//            if(tallestPlayer[i]!= null && tallestPlayer[i].getHeight()==currentPlayer.getHeight())
//            {
//                tallestPlayers[j] = tallestPlayer[i];
//                j++;
//            }
//        }
//        return tallestPlayers;
//    }


}
