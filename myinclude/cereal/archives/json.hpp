namespace cereal {
    class JSONOutputArchive {
    public:
        class Options {
        public:
            //! Default options
            static Options Default() {
                int t = 56;
                return Options();
            }
        };
    };
}