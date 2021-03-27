/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;
import java.util.ArrayList;

/**
 *
 * @author bhaum
 */
public interface TableMember {
    public String getAttribute(int n);
    public ArrayList<String> getAttributes();
    public String getAttributeName(int n);
    public ArrayList<String> getAttributeNames();
    
}
