# rescript-node-sass

[ReScript](https://rescript-lang.org) bindings for [node-sass](https://github.com/sass/node-sass).

# Usage

```reasonml
let css_buffer = NodeSass.renderSync(sass_filename);
```

# Developers section

First and formost, configure your environment with `npm install`.

Specific BuckleScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
