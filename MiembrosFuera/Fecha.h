#pragma once

#ifndef Fecha_H
#define Fecha_H

class Fecha
{
private:
    int m_dia{};
    int m_mes{};
    int m_anho{};

public:
    Fecha(int dia, int mes, int anho);

    void setFecha(int dia, int mes, int anho);

    int getdia() { return m_dia; }
    int getmes() { return m_mes; }
    int getanho() { return m_anho; }
};

#endif











