
#include "Cell.hpp"

#define index 7

enum CellType
{
    plant = 0 ,
    wingDisc = 1
};
enum Equation
{
    simpeODE = 0 ,
    fullModel = 1
};
class Tissue
{
public:
    
    vector<Cell> cells;
    CellType cellType ;
    Equation equationsType ;
    
    
    
    void Cal_AllCellCenters () ;
    void Cal_AllCellCntrToCntr () ;
    void Find_AllCellNeighborCandidates () ;
    void Find_AllCellNeighbors () ;
    void FindInterfaceWithNeighbor() ;
    vector<Cell> ReadFile ( ) ;
    vector<Cell> ReadFile2 ( ) ;
    vector<Cell> ReadFile3 ( ) ;
    void Find_AllCell_NeighborID_Cell () ;
    void Cal_AllCellNewEdge () ;
    void Find_CommonNeighbors () ;
    void Print_CommonNeighbors () ;             //can be deleted
    void Cal_Intersect () ;
    void Find_boundaries () ;                   //incomplete
    void Count_IntersectPoints () ;             //can be deleted
    void Cal_AllCellVertices () ;      
    void ParaViewVertices () ;
    void ParaViewTissue () ;
    void ParaViewBoundary () ;
    void ParaViewInitialConfiguration () ;
    void Cal_AllCellConnections () ;
    void Test () ;
    void Add_NewVerticesToBoundaryEdges () ;
    void Refine_VerticesInBoundaryCells () ;
    void Find_Cyclic4 () ;
    void Cyclic4Correction () ;
    void SortVertices () ;
    void AllCell_RefineNoBoundary () ;
    void Refine_CurvedInterface () ;
    void Print_VeritcesSize () ;
    
 
    void Find_AllMeshes () ;
    void Cal_AllSelfDiffusion () ;
    void Find_IntercellularMeshConnection () ;
    void IntercellularDiffusion () ;
    void EulerMethod () ;
    void EulerMethod2 () ;
    void Find_SecretingCell () ;
    void ParaViewMesh (int number) ;
    
    void FullModel_Diffusion () ;
    void FullModel_AllCellProductions () ;      //Initialization
    void FullModelEulerMethod () ;              //Main loop
    

    
    
    
};
