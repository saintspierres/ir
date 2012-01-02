/*
 *  ir.h
 *  
 *
 *  Created by Eric Bremond on 12/10/11.
 *  Copyright 2011 ir.h. All rights reserved.
 *
 */

#define TAB_SIZE 1000
#define CRD_SIZE 3
#define LGN_SIZE 100

void usage();
void rcmdl(int argc, char *argv[], char *inpfile, char *outfile, double *fwhm);
void rtrans(char *filename, int *ntrans, double trans[][CRD_SIZE], double fwhm);
void rgauss(char *filename, int *ntrans, double trans[][CRD_SIZE], double fwhm);
double lorentz(double x, double mu, double A, double fwhm);
void spectrum(int *npts, double pts[][CRD_SIZE], double xmin, double xmax, double xstp, int ntrans, double trans[][CRD_SIZE]);
void wspec(char *filename, int npts, double pts[][CRD_SIZE]);
