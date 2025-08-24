/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classe_abstrata;

/**
 *
 * @author laboratorio
 */
public class Triangulo extends FormaGeometrica {

    public float base, altura;
    @Override
    float calcularArea() {
        return (base * altura)/2;
    }
}
