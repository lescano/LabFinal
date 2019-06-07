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
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/dfef8105/ICollectible.o \
	${OBJECTDIR}/_ext/dfef8105/IDictionary.o \
	${OBJECTDIR}/_ext/dfef8105/IKey.o \
	${OBJECTDIR}/_ext/dfef8105/ListDiccIterator.o \
	${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorKey.o \
	${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorObj.o \
	${OBJECTDIR}/_ext/dfef8105/Lista.o \
	${OBJECTDIR}/_ext/dfef8105/ListaDicc.o \
	${OBJECTDIR}/_ext/dfef8105/ListaIterator.o \
	${OBJECTDIR}/_ext/dfef8105/Nodo.o \
	${OBJECTDIR}/_ext/dfef8105/NodoDicc.o \
	${OBJECTDIR}/_ext/dfef8105/Par.o \
	${OBJECTDIR}/Cine.o \
	${OBJECTDIR}/Credito.o \
	${OBJECTDIR}/Debito.o \
	${OBJECTDIR}/DtFecha.o \
	${OBJECTDIR}/Fabrica.o \
	${OBJECTDIR}/Funcion.o \
	${OBJECTDIR}/Opinion.o \
	${OBJECTDIR}/Pago.o \
	${OBJECTDIR}/Pelicula.o \
	${OBJECTDIR}/Reserva.o \
	${OBJECTDIR}/Sala.o \
	${OBJECTDIR}/Usuario.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/sistema.o \
	${OBJECTDIR}/usuPeli.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/labfinal.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/labfinal.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/labfinal ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/dfef8105/ICollectible.o: ../../../ColeccionesG/ICollectible.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ICollectible.o ../../../ColeccionesG/ICollectible.cpp

${OBJECTDIR}/_ext/dfef8105/IDictionary.o: ../../../ColeccionesG/IDictionary.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/IDictionary.o ../../../ColeccionesG/IDictionary.cpp

${OBJECTDIR}/_ext/dfef8105/IKey.o: ../../../ColeccionesG/IKey.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/IKey.o ../../../ColeccionesG/IKey.cpp

${OBJECTDIR}/_ext/dfef8105/ListDiccIterator.o: ../../../ColeccionesG/ListDiccIterator.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ListDiccIterator.o ../../../ColeccionesG/ListDiccIterator.cpp

${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorKey.o: ../../../ColeccionesG/ListDiccIteratorKey.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorKey.o ../../../ColeccionesG/ListDiccIteratorKey.cpp

${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorObj.o: ../../../ColeccionesG/ListDiccIteratorObj.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ListDiccIteratorObj.o ../../../ColeccionesG/ListDiccIteratorObj.cpp

${OBJECTDIR}/_ext/dfef8105/Lista.o: ../../../ColeccionesG/Lista.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/Lista.o ../../../ColeccionesG/Lista.cpp

${OBJECTDIR}/_ext/dfef8105/ListaDicc.o: ../../../ColeccionesG/ListaDicc.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ListaDicc.o ../../../ColeccionesG/ListaDicc.cpp

${OBJECTDIR}/_ext/dfef8105/ListaIterator.o: ../../../ColeccionesG/ListaIterator.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/ListaIterator.o ../../../ColeccionesG/ListaIterator.cpp

${OBJECTDIR}/_ext/dfef8105/Nodo.o: ../../../ColeccionesG/Nodo.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/Nodo.o ../../../ColeccionesG/Nodo.cpp

${OBJECTDIR}/_ext/dfef8105/NodoDicc.o: ../../../ColeccionesG/NodoDicc.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/NodoDicc.o ../../../ColeccionesG/NodoDicc.cpp

${OBJECTDIR}/_ext/dfef8105/Par.o: ../../../ColeccionesG/Par.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/dfef8105
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/dfef8105/Par.o ../../../ColeccionesG/Par.cpp

${OBJECTDIR}/Cine.o: Cine.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Cine.o Cine.cpp

${OBJECTDIR}/Credito.o: Credito.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Credito.o Credito.cpp

${OBJECTDIR}/Debito.o: Debito.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Debito.o Debito.cpp

${OBJECTDIR}/DtFecha.o: DtFecha.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtFecha.o DtFecha.cpp

${OBJECTDIR}/Fabrica.o: Fabrica.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fabrica.o Fabrica.cpp

${OBJECTDIR}/Funcion.o: Funcion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funcion.o Funcion.cpp

${OBJECTDIR}/Opinion.o: Opinion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Opinion.o Opinion.cpp

${OBJECTDIR}/Pago.o: Pago.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pago.o Pago.cpp

${OBJECTDIR}/Pelicula.o: Pelicula.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pelicula.o Pelicula.cpp

${OBJECTDIR}/Reserva.o: Reserva.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Reserva.o Reserva.cpp

${OBJECTDIR}/Sala.o: Sala.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sala.o Sala.cpp

${OBJECTDIR}/Usuario.o: Usuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Usuario.o Usuario.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/sistema.o: sistema.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sistema.o sistema.cpp

${OBJECTDIR}/usuPeli.o: usuPeli.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/usuPeli.o usuPeli.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
