//********************************************************************************** 
//** �ļ����ƣ�CT3D_TexturedVertex3d.cpp
//** CopyRight (c) 2000-2012 ��󼪰���Ϣ�������޹�˾����һ��
//** �ļ������� ��ά����(��������ӳ��Ķ���)���ʵ��
//** �� �� �ˣ� ����
//** �������ڣ� 2012-04-13
//********************************************************************************** 


#include "CT3D_TexturedVertex3f.h"

//********************************************************************************** 
//** �������ƣ� ShadedVertex3f
//** ���������� ���캯��1
//** ��    �룺 ��           
//** ��    ���� ��
//** ����ֵ��	��
//** ��    �ߣ� ����
//** �������ڣ� 2012-04-16
//**********************************************************************************
TexturedVertex3f::TexturedVertex3f(float dx,float dy,float dz,float du,float dv)
:Vertex3f(dx,dy,dz),
tu(du),
tv(dv)
{

}

//********************************************************************************** 
//** �������ƣ� ShadedVertex3f
//** ���������� ���캯��2
//** ��    �룺 ��           
//** ��    ���� ��
//** ����ֵ��	��
//** ��    �ߣ� ����
//** �������ڣ� 2012-04-16
//**********************************************************************************
TexturedVertex3f::TexturedVertex3f(Vertex3f& vVertex,float fu,float fv)
:Vertex3f(vVertex),
tu(fu),
tv(fv)
{

}

//********************************************************************************** 
//** �������ƣ� sizeBuffer
//** ����������������ά��ṹ�Ĵ�С
//** ��    �룺 ��           
//** ��    ���� ��
//** ����ֵ��	��ṹ��С
//** ��    �ߣ� ����
//** �������ڣ� 2012-04-26
//**********************************************************************************
size_t TexturedVertex3f::sizeBuffer()
{
    size_t nSize = Vertex3f::sizeBuffer() + 2*sizeof(float);
    return nSize;
}