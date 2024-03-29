// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// log_dmvn
double log_dmvn(arma::vec& x, arma::mat& Sigma);
RcppExport SEXP _newmpsBART4_log_dmvn(SEXP xSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_dmvn(x, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// bspline
arma::mat bspline(arma::vec x, arma::vec x_obs);
RcppExport SEXP _newmpsBART4_bspline(SEXP xSEXP, SEXP x_obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_obs(x_obsSEXP);
    rcpp_result_gen = Rcpp::wrap(bspline(x, x_obs));
    return rcpp_result_gen;
END_RCPP
}
// sbart
Rcpp::List sbart(arma::mat x_train, arma::vec y_train, arma::mat x_test, arma::mat xcut, arma::cube B_train, arma::cube B_test, arma::mat D, int n_tree, int n_mcmc, int n_burn, double tau, double mu, double tau_mu, double tau_b, double tau_b_intercept, double alpha, double beta, double a_tau, double d_tau, double nu, double delta, double a_delta, double d_delta, double a_tau_b, double d_tau_b, arma::vec p_sample, arma::vec p_sample_levels, bool intercept_model, bool stump);
RcppExport SEXP _newmpsBART4_sbart(SEXP x_trainSEXP, SEXP y_trainSEXP, SEXP x_testSEXP, SEXP xcutSEXP, SEXP B_trainSEXP, SEXP B_testSEXP, SEXP DSEXP, SEXP n_treeSEXP, SEXP n_mcmcSEXP, SEXP n_burnSEXP, SEXP tauSEXP, SEXP muSEXP, SEXP tau_muSEXP, SEXP tau_bSEXP, SEXP tau_b_interceptSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP a_tauSEXP, SEXP d_tauSEXP, SEXP nuSEXP, SEXP deltaSEXP, SEXP a_deltaSEXP, SEXP d_deltaSEXP, SEXP a_tau_bSEXP, SEXP d_tau_bSEXP, SEXP p_sampleSEXP, SEXP p_sample_levelsSEXP, SEXP intercept_modelSEXP, SEXP stumpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x_train(x_trainSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_train(y_trainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x_test(x_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xcut(xcutSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type B_train(B_trainSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type B_test(B_testSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type n_tree(n_treeSEXP);
    Rcpp::traits::input_parameter< int >::type n_mcmc(n_mcmcSEXP);
    Rcpp::traits::input_parameter< int >::type n_burn(n_burnSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_mu(tau_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_b(tau_bSEXP);
    Rcpp::traits::input_parameter< double >::type tau_b_intercept(tau_b_interceptSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< double >::type d_tau(d_tauSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type a_delta(a_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type d_delta(d_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type a_tau_b(a_tau_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_tau_b(d_tau_bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_sample(p_sampleSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p_sample_levels(p_sample_levelsSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept_model(intercept_modelSEXP);
    Rcpp::traits::input_parameter< bool >::type stump(stumpSEXP);
    rcpp_result_gen = Rcpp::wrap(sbart(x_train, y_train, x_test, xcut, B_train, B_test, D, n_tree, n_mcmc, n_burn, tau, mu, tau_mu, tau_b, tau_b_intercept, alpha, beta, a_tau, d_tau, nu, delta, a_delta, d_delta, a_tau_b, d_tau_b, p_sample, p_sample_levels, intercept_model, stump));
    return rcpp_result_gen;
END_RCPP
}
// rand_unif
double rand_unif();
RcppExport SEXP _newmpsBART4_rand_unif() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rand_unif());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_newmpsBART4_log_dmvn", (DL_FUNC) &_newmpsBART4_log_dmvn, 2},
    {"_newmpsBART4_bspline", (DL_FUNC) &_newmpsBART4_bspline, 2},
    {"_newmpsBART4_sbart", (DL_FUNC) &_newmpsBART4_sbart, 29},
    {"_newmpsBART4_rand_unif", (DL_FUNC) &_newmpsBART4_rand_unif, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_newmpsBART4(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
