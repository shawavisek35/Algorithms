package com.miniProject;
import java.util.Scanner;
import Model.*;

public class App {
    public static void main(String []args)
    {
        Scanner input = new Scanner(System.in);

        Model newModel;
        newModel = new Model(
                new FootballPlayer(
                        1,
                        65,
                        "Ronaldo",
                        "Mid",
                        "New jersey",
                        "Coolege",
                        new Height(
                                6,
                                7
                        )
                ),
                new FootballPlayer(
                        1,
                        65,
                        "Ronaldo",
                        "Mid",
                        "New jersey",
                        "Coolege",
                        new Height(
                                6,
                                7
                        )
                ),
                new FootballPlayer(
                        1,
                        65,
                        "Ronaldo",
                        "Mid",
                        "New jersey",
                        "Coolege",
                        new Height(
                                6,
                                7
                        )
                )
        );
    }
}
