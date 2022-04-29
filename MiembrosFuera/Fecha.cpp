#include "Fecha.h"

// Constructor Fecha
Fecha::Fecha(int dia, int mes, int anho)
{
    setFecha(dia, mes, anho);
}

// Función miembro Fecha 
void Fecha::setFecha(int dia, int mes, int anho)
{
    m_mes = mes;
    m_anho = anho;
    m_dia = dia;
}




















