#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Apunt.o \
	${OBJECTDIR}/ArePol5.o \
	${OBJECTDIR}/AreaCudrilateros.o \
	${OBJECTDIR}/AreaPolig.o \
	${OBJECTDIR}/AreaRecUs.o \
	${OBJECTDIR}/ArrSumtria.o \
	${OBJECTDIR}/ContApunt.o \
	${OBJECTDIR}/DirConVar.o \
	${OBJECTDIR}/DirecApun.o \
	${OBJECTDIR}/DireccionVariable.o \
	${OBJECTDIR}/FisiArre.o \
	${OBJECTDIR}/FusArreg.o \
	${OBJECTDIR}/Galitro.o \
	${OBJECTDIR}/GuarArre.o \
	${OBJECTDIR}/HorasDiasMinutos.o \
	${OBJECTDIR}/ImpArreglo.o \
	${OBJECTDIR}/KilometrosPies.o \
	${OBJECTDIR}/MenuArre.o \
	${OBJECTDIR}/MetrKilCent.o \
	${OBJECTDIR}/MetroKiloArreg.o \
	${OBJECTDIR}/OperaArre.o \
	${OBJECTDIR}/Operaciones.o \
	${OBJECTDIR}/SumArre.o \
	${OBJECTDIR}/VoluArea.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo25prob

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo25prob: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo25prob ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Apunt.o: Apunt.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Apunt.o Apunt.c

${OBJECTDIR}/ArePol5.o: ArePol5.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArePol5.o ArePol5.c

${OBJECTDIR}/AreaCudrilateros.o: AreaCudrilateros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AreaCudrilateros.o AreaCudrilateros.c

${OBJECTDIR}/AreaPolig.o: AreaPolig.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AreaPolig.o AreaPolig.c

${OBJECTDIR}/AreaRecUs.o: AreaRecUs.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AreaRecUs.o AreaRecUs.c

${OBJECTDIR}/ArrSumtria.o: ArrSumtria.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArrSumtria.o ArrSumtria.c

${OBJECTDIR}/ContApunt.o: ContApunt.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContApunt.o ContApunt.c

${OBJECTDIR}/DirConVar.o: DirConVar.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DirConVar.o DirConVar.c

${OBJECTDIR}/DirecApun.o: DirecApun.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DirecApun.o DirecApun.c

${OBJECTDIR}/DireccionVariable.o: DireccionVariable.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DireccionVariable.o DireccionVariable.c

${OBJECTDIR}/FisiArre.o: FisiArre.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FisiArre.o FisiArre.c

${OBJECTDIR}/FusArreg.o: FusArreg.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FusArreg.o FusArreg.c

${OBJECTDIR}/Galitro.o: Galitro.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Galitro.o Galitro.c

${OBJECTDIR}/GuarArre.o: GuarArre.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GuarArre.o GuarArre.c

${OBJECTDIR}/HorasDiasMinutos.o: HorasDiasMinutos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HorasDiasMinutos.o HorasDiasMinutos.c

${OBJECTDIR}/ImpArreglo.o: ImpArreglo.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImpArreglo.o ImpArreglo.c

${OBJECTDIR}/KilometrosPies.o: KilometrosPies.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/KilometrosPies.o KilometrosPies.c

${OBJECTDIR}/MenuArre.o: MenuArre.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MenuArre.o MenuArre.c

${OBJECTDIR}/MetrKilCent.o: MetrKilCent.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MetrKilCent.o MetrKilCent.c

${OBJECTDIR}/MetroKiloArreg.o: MetroKiloArreg.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MetroKiloArreg.o MetroKiloArreg.c

${OBJECTDIR}/OperaArre.o: OperaArre.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OperaArre.o OperaArre.c

${OBJECTDIR}/Operaciones.o: Operaciones.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Operaciones.o Operaciones.c

${OBJECTDIR}/SumArre.o: SumArre.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SumArre.o SumArre.c

${OBJECTDIR}/VoluArea.o: VoluArea.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/VoluArea.o VoluArea.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo25prob

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
