void function(char *pass, int nrBytes, char *out)
{
    char intermediate[16];
    memcpy(intermedite, pass, nrBytes < 16 ? nrBytes : 16);
    bcrypt(out, intermediate);
    memset(intermediate, 0, 16);
    free(intermediate);
}
