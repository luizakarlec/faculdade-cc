/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classe_abstrata;

/**
 *
 * @author laboratorio
 */
public class Quadrado extends FormaGeometrica {
    
    public float lado;
    @Override
    float calcularArea() {
        float area;
        area = lado * lado;
        return area;
    }
}
