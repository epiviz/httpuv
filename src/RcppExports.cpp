// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sendWSMessage
void sendWSMessage(std::string conn, bool binary, Rcpp::RObject message);
RcppExport SEXP httpuv_sendWSMessage(SEXP connSEXP, SEXP binarySEXP, SEXP messageSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string conn = Rcpp::as<std::string >(connSEXP);
    bool binary = Rcpp::as<bool >(binarySEXP);
    Rcpp::RObject message = Rcpp::as<Rcpp::RObject >(messageSEXP);
    sendWSMessage(conn, binary, message);
    return R_NilValue;
END_RCPP
}
// closeWS
void closeWS(std::string conn);
RcppExport SEXP httpuv_closeWS(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string conn = Rcpp::as<std::string >(connSEXP);
    closeWS(conn);
    return R_NilValue;
END_RCPP
}
// makeTcpServer
Rcpp::RObject makeTcpServer(const std::string& host, int port, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makeTcpServer(SEXP hostSEXP, SEXP portSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string host = Rcpp::as<std::string >(hostSEXP);
    int port = Rcpp::as<int >(portSEXP);
    Rcpp::Function onHeaders = Rcpp::as<Rcpp::Function >(onHeadersSEXP);
    Rcpp::Function onBodyData = Rcpp::as<Rcpp::Function >(onBodyDataSEXP);
    Rcpp::Function onRequest = Rcpp::as<Rcpp::Function >(onRequestSEXP);
    Rcpp::Function onWSOpen = Rcpp::as<Rcpp::Function >(onWSOpenSEXP);
    Rcpp::Function onWSMessage = Rcpp::as<Rcpp::Function >(onWSMessageSEXP);
    Rcpp::Function onWSClose = Rcpp::as<Rcpp::Function >(onWSCloseSEXP);
    Rcpp::RObject __result = makeTcpServer(host, port, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose);
    return Rcpp::wrap(__result);
END_RCPP
}
// makePipeServer
Rcpp::RObject makePipeServer(const std::string& name, int mask, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makePipeServer(SEXP nameSEXP, SEXP maskSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string name = Rcpp::as<std::string >(nameSEXP);
    int mask = Rcpp::as<int >(maskSEXP);
    Rcpp::Function onHeaders = Rcpp::as<Rcpp::Function >(onHeadersSEXP);
    Rcpp::Function onBodyData = Rcpp::as<Rcpp::Function >(onBodyDataSEXP);
    Rcpp::Function onRequest = Rcpp::as<Rcpp::Function >(onRequestSEXP);
    Rcpp::Function onWSOpen = Rcpp::as<Rcpp::Function >(onWSOpenSEXP);
    Rcpp::Function onWSMessage = Rcpp::as<Rcpp::Function >(onWSMessageSEXP);
    Rcpp::Function onWSClose = Rcpp::as<Rcpp::Function >(onWSCloseSEXP);
    Rcpp::RObject __result = makePipeServer(name, mask, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose);
    return Rcpp::wrap(__result);
END_RCPP
}
// destroyServer
void destroyServer(std::string handle);
RcppExport SEXP httpuv_destroyServer(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string handle = Rcpp::as<std::string >(handleSEXP);
    destroyServer(handle);
    return R_NilValue;
END_RCPP
}
// run
bool run(uint32_t timeoutMillis);
RcppExport SEXP httpuv_run(SEXP timeoutMillisSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    uint32_t timeoutMillis = Rcpp::as<uint32_t >(timeoutMillisSEXP);
    bool __result = run(timeoutMillis);
    return Rcpp::wrap(__result);
END_RCPP
}
// stopLoop
void stopLoop();
RcppExport SEXP httpuv_stopLoop() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    stopLoop();
    return R_NilValue;
END_RCPP
}
// base64encode
std::string base64encode(const Rcpp::RawVector& x);
RcppExport SEXP httpuv_base64encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::RawVector x = Rcpp::as<Rcpp::RawVector >(xSEXP);
    std::string __result = base64encode(x);
    return Rcpp::wrap(__result);
END_RCPP
}
