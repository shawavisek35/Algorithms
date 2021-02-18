package Model;
import java.util.*;

public class Model {
//    private FootballPlayer []playerList = new FootballPlayer[3];
//    private OffensiveLine offensiveLine;
    private FootballPlayerData fpData = new FootballPlayerData();

    public Model()
    {
//        this.playerList[0] = new FootballPlayer(1,65,"Ronaldo", "Center", "World","school",new Height(5,7));
//        this.playerList[1] = new FootballPlayer(2,60,"Neymar", "Offensive Guard", "World","school",new Height(6,7));
//        this.playerList[2] = new FootballPlayer(3,66,"Messi", "Offensive Tackle", "World","school",new Height(6,7));
//        offensiveLine = new OffensiveLine(playerList);

//        FootballPlayer fp = new FootballPlayer(2,209,"Marcus Allen","S","Upper Marlboro, MD","Dr. Henry A. Wise",new Height(6,2));
//        System.out.println(fp.getAttributes().toString());
//        System.out.println(fp.getAttributes().toString()); //Yes, we are running
//        for (int i = 0; i < fp.getAttributes().size(); i++)
//        {
//            System.out.println(i + " = " + fp.getAttributeName(i) + " - " +
//                    fp.getAttribute(i));
//        }
//        System.out.println(fp.getAttributeNames().toString());
//        System.out.println(fp.getAttributeNames().toString()); //Yes, we are running
        fpData.ReadPlayersFromXML();

        System.out.println("=============================================================");
        //System.out.println("the table size is "+ fpData.getTable().size());
        System.out.println("=============================================================");
        this.displayArray(fpData.getHeaders());
        this.displayArray(fpData.getLine(4));
        System.out.println("=============================================================");
        this.displayArray(fpData.getHeaders()); this.displayArray(fpData.getLine(121));
        System.out.println("=============================================================");
        this.displayArrayOfArrays(fpData.getLines(70, 72));
        System.out.println("=============================================================");
        this.displayArrayOfArrays(fpData.getLines(100, 101));
        System.out.println("=============================================================");
        System.out.println("=============================================================");
        System.out.println("the table size is "+ fpData.getTable().size());
    }

    public void displayArrayOfArrays(ArrayList<ArrayList<String>> manyLines)
    {
        for (int i = 0; i < manyLines.size(); i++)
        {
            displayArray(manyLines.get(i));
        }
    }

    public void displayArray(ArrayList<String> oneLineOnly)
    {
        for (int k = 0; k < oneLineOnly.size(); k++)
        {
            System.out.print(oneLineOnly.get(k)); System.out.print(" ");
        }
        System.out.println("");
    }

    public FootballPlayerData getFpData() {
        return fpData;
    }

    public void setFpData(FootballPlayerData fpData)
    {
        this.fpData = fpData;
    }
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


//}
